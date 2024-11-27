# GitHub CLI 环境配置和检查

## 准备工作清单

### 1. 检查 Git 安装
```bash
git --version
```
确保已正确安装 Git，并且版本不要太旧。

### 2. 检查 GitHub CLI 安装
```bash
gh --version
```
应该显示 GitHub CLI 的版本信息。

### 3. 检查环境变量
需要确保以下工具都在系统的 PATH 中：
- Git
- GitHub CLI (gh)

可以通过以下命令查看 PATH 环境变量：
```bash
echo %PATH%
```

### 4. GitHub CLI 认证
首次使用需要进行身份认证：
```bash
gh auth login
```
认证过程中需要：
1. 选择 GitHub.com
2. 选择 HTTPS 协议
3. 是否使用系统凭证管理器
4. 使用浏览器进行身份验证

### 5. 配置 Git
确保 Git 配置了用户名和邮箱：
```bash
git config --global user.name "你的GitHub用户名"
git config --global user.email "你的邮箱"
```

## 验证配置

### 1. 验证 Git 配置
```bash
git config --list
```
检查 user.name 和 user.email 是否正确配置。

### 2. 验证 GitHub CLI 认证状态
```bash
gh auth status
```
应显示已登录状态和关联的 GitHub 账号。

### 3. 测试 GitHub CLI 功能
```bash
gh repo list
```
应该能够列出你的 GitHub 仓库列表。

## 常见问题

### 1. 环境变量问题
如果命令未找到，检查以下路径是否在 PATH 中：
- Git: 通常在 `C:\Program Files\Git\cmd`
- GitHub CLI: 通常在 `%LOCALAPPDATA%\Microsoft\WindowsApps`

### 2. 认证问题
如果遇到认证问题：
1. 使用 `gh auth logout` 注销当前认证
2. 使用 `gh auth login` 重新认证

### 3. 代理设置
如果需要使用代理：
```bash
git config --global http.proxy http://proxy-server:port
git config --global https.proxy https://proxy-server:port
```

## 下一步
完成环境配置后，我们就可以：
1. 创建新的 GitHub 仓库
2. 推送本地代码
3. 管理 Issues 和 Pull Requests
4. 使用其他 GitHub 功能

## 相关命令参考
```bash
# 查看所有可用命令
gh --help

# 查看特定命令的帮助
gh repo --help
gh auth --help

# 查看当前配置
gh config list
```
