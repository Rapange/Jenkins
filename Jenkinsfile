	node{
		checkout scm
		
		stage('Build'){
			echo 'Building..'
			sh 'make'
		}

		stage('Test'){
			echo 'Testing..'
			
			sh 'bash Test.sh my_division > Results.txt'
			sh 'cat Results.txt'
			
		}
		stage('Deploy'){
			echo 'Deploying....'
			
		}
	}
