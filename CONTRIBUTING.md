# Contributing

First, thank you for your interest in contributing to this project, teamwork makes the dream work! When contributing
to this repository, please first discuss the change you wish to make via issue, with the owners of this repository
before making a change. This will greatly speed up the process of determining if and how your contribution will fit
into the project.

## Pull Request Process

1. Ensure any install or build dependencies are removed before the end of the layer when doing a
   build.
2. Include useful information about the changes you are wanting to contribute, including: what you've done, the
   intended goal and any possible side effects or breaking changes relative to previous version.
3. If your pull request intends to fix a specific issue please reference that in the pull request message.
4. Do not increment the version number, this will be done by one of the maintainers as needed. The versioning scheme
   we use is [SemVer](http://semver.org/).
5. Pull requests will only be merged after the code is reviewed, requested changes made and the changes are sufficiently
   covered by the test suite.

## Coding Conventions

Effort is taken to make ensure code is first and foremost readable, below are some quick guidelines to follow. When in
doubt if it doesn't match the existing style you will likely be asked to reformat accordingly (i.e. listen to the linter).
  * All JavaScript and free form Fortran code is indented two spaces
  * Parser output in unit tests (corpus/\*.txt) is indented two spaces
  * Parser ouput in unit tests is logically grouped to reduce the vertical space required
  * Line length is preferred to be 80 characters or less

## Commit Messages

Good clean commit messages benefit everyone, please refer to https://chris.beams.io/posts/git-commit. To summarize
the high points I have copied the seven rules explained in the link below.

1. Separate subject from body with a blank line
2. Limit the subject line to 50 characters
3. Capitalize the subject line
4. Do not end the subject line with a period
5. Use the imperative mood in the subject line
6. Wrap the body at 72 characters
7. Use the body to explain what and why vs. how


Please note we have a [code of conduct](CODE_OF_CONDUCT.md), please follow it in all your interactions with the
project.
