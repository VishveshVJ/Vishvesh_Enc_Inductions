from setuptools import find_packages
from setuptools import setup

setup(
    name='gs_ros_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('gs_ros_interfaces', 'gs_ros_interfaces.*')),
)
