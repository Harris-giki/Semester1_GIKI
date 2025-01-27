const fs = require('fs');
const path = require('path');
const simpleGit = require('simple-git');

// Initialize Git
const git = simpleGit();

// List of files to ignore
const ignoredFiles = ['node_modules', 'data.json', 'index.txt', 'package-lock.json', 'package.json', 'README.md'];

// Get all files in the current directory, excluding ignored files
const getAllFiles = () => {
    return fs.readdirSync(__dirname).filter(file => {
        const filePath = path.join(__dirname, file);
        return fs.lstatSync(filePath).isFile() && !ignoredFiles.includes(file); // Exclude directories and ignored files
    });
};

// Commit each file with a unique message
const commitFiles = async () => {
    const files = getAllFiles();

    for (const file of files) {
        try {
            const commitMessage = `Commit for file: ${file}`; // Unique commit message for each file

            // Stage the file
            await git.add(file);

            // Commit the file with a unique commit message
            await git.commit(commitMessage);

            console.log(`Committed: ${file} with message "${commitMessage}"`);
        } catch (error) {
            console.error(`Error committing ${file}:`, error.message);
        }
    }

    // Push all commits to the repository
    try {
        await git.push();
        console.log('All commits pushed successfully!');
    } catch (pushError) {
        console.error('Error pushing commits:', pushError.message);
    }
};

// Start the process
commitFiles();
