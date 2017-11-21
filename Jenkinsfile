	node{
		checkout scm
		
		stage('Build'){
			echo 'Building..'
			sh 'g++ my_division.cpp -o my_division -std=c++11'
		}

		stage('Test'){
			echo 'Testing..'
			//sh './Hello 4 5'
			sh 'bash Test.sh my_division'
			
		}
		stage('Deploy'){
			echo 'Deploying....'
			
		}
	}
