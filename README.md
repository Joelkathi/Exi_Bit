# Exi_Bit
A huge game in making.
// NOT currently in Exi_Bit
const user = await User.findOne({ email });

if (!user || !verifyPassword(password, user.passwordHash)) {
    return res.status(401).json({ error: "Invalid credentials" });
}

const token = jwt.sign(
    { userId: user.id },
    process.env.JWT_SECRET
);

return res.json({ token });
