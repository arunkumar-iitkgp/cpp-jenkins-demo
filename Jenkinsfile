pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                echo 'Fetching code from local Git repository...'
                checkout scm
            }
        }
        
        stage('Build') {
            steps {
                echo 'Compiling C++ Code...'
                // Compiles main.cpp into an executable named 'my_system'
                // Note: Windows users use 'g++ main.cpp -o my_system.exe'
                sh 'g++ main.cpp -o my_system.exe' 
            }
        }
        
        stage('Unit Test') {
            steps {
                echo 'Executing Automated Unit Tests...'
                // Runs the compiled program with the "test" argument
                // Note: Windows users use 'bat "my_system.exe test"'
                sh './my_system.exe test'
            }
        }

        stage('Simulated Deep Testing') {
            steps {
                echo 'Simulating heavy production testing suite...'
                // This mimics the 1-hour wait time you experienced at scale
                sleep time: 5, unit: 'MINUTES' 
                echo 'Heavy testing complete.'
            }
        }
    }
}