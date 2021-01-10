
### Create a Github.com account
  Via [Github.com](https://github.com/join "Join Github") or
  Download and install git 
  ```bash
    $ sudo apt-get install git
  ```
### 
### open terminal (Ctrl + t)
```bash
# step 1 : setup global parameters
$ git config --global user.name "Inkfil"
$ git config --global user.email "ronakjainrjrjrj@gmail.com"
```
```bash
# optional Parameters
$ git config --global color.ui true
$ git config --global core.editor vim
```
```bash
# to check whether ssh keys exist or not
$ ls -al ~/.ssh
```
### Generating new ssh keys
```bash
# if keys do not exist generate new ssh keys
$ ssh-keygen -t rsa -C "ronakjainrjrjrj@gmail.com"
$ chmod 0600 "$HOME/.ssh/id_rsa"
```
```bash
# copy generated/existing ssh keys to clipboard
$ clip < ~/.ssh/id_rsa.pub
```
### Paste your ssh public key into your github account settings.
  - Go to your github Account Settings
  - Click “SSH Keys” on the left.
  - Click “Add SSH Key” on the right.
  - Add a label (like “My laptop”) and paste the public key into the big text box.
```bash
# add ssh key in github account
$ ssh -T git@github.com
```
```bash
  # Hi username! You've successfully authenticated, but Github does
  # not provide shell access.
```


REFERENCE: [kbroman.org](http://kbroman.org/github_tutorial/pages/first_time.html)

