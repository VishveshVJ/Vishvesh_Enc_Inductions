from setuptools import find_packages
from setuptools import setup

setup(
    name='simulation_interfaces',
    version='2.0.1',
    packages=find_packages(
        include=('simulation_interfaces', 'simulation_interfaces.*')),
)
