# Volumetric Mapping with 5G Multi-Robots Autonomy and Obscured Data Enhancement with Radar Sensing
Code Availability: The code will be open-sourced after the acceptance of our research paper, which is currently under review. Stay tuned for updates!
## Section I Introduction: Figure 1
- Robohub Lab Uwaterloo.
![Experiment 1](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/1.1.jpg)
- 360 degree volumteric map of the lab by single AMR.
![Experiment 1](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/1.2.png)
- Dense cloud map by ORBSLAM3 without volumetric feature. 
![Experiment 1](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/1.3.png)
- ORB features by ORBSLAM3, visual node i.e. OAK-D Pro camera FOV. 
![Experiment 1](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/1.4.png)
- Radar maps (point cloud) of objects present in occlusion/ behind the obstacles highlighted inside red boundry box. 
![Experiment 1](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/1.5.png)


## Section IV: Experiment 2 Figure 5
- The annotation in red boundry box shows the horizontal vent pipe present close to floor, present behing the furniture.
![Experiment 2](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/2.1.jpg)

![Experiment 2](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/2.2.jpg)
- Volumetric map of the 3rd floor corridor of Uwaterloo engineering 7 building. The annotation in the red boundry box shows the location of pipe. 1) the white area in the middle is due to camera limited range, and few point cloud genrated by SLAM, 2) the visual sensor fails to locate the pipe beacuause of occlusion such as furniture. 
![Experiment 2](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/2.3.png)
- ORBSLAM3 dense cloud map without volumetric map feature. 
![Experiment 2](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/2.4.png)
- ORB feature by ORBSLAM3, FOV from visual node i.e. OAK-D Pro camera.
![Experiment 2](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/2.5.png)
- Radar succefully detects and map the vent pipe in the occluded area. 
![Experiment 2](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/2.6.png)


## Section IV: Experiment 3 Figure 6
- Mapping Beyond Visual Line of Sight. 3 Metal studs present behind the wall annotation in the red boundry box shows their location. The view is completly blocked. 
![Experiment 3](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/3.1.jpg)

![Experiment 3](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/3.2.jpg)

![Experiment 3](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/3.3.jpg)
- Volumetric map, visual node failed to map what is present behind the wall. 
![Experiment 3](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/3.4.png)
- ORBLSAM3 dense map failed to make point cloud of studs present behind the wall.
![Experiment 3](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/3.5.png)
- ORB features by ORBSLAM3. FOV of visual node i.e. OAK-D Pro camera.
![Experiment 3](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/3.6.png)
- Radar succefully map the metallic stud present behind the wall, able to see through the complete blocked field of view. 
![Experiment 3](https://github.com/Maaz-qureshi98/Volumetric-Mapping/blob/main/3.7.png)

