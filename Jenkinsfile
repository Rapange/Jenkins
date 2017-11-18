Jenkinsfile (Scripted Pipeline)
pipeline{
	node{
		checkout scm
		
		stage{
			steps{
				echo 'Building..'

			}
		}

		stage('Test'){
			steps{
				echo 'Testing..'
			}
		}
		stage('Deploy'){
			steps{
				echo 'Deploying....'
			}
		}
	}
}
