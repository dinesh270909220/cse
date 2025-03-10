<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Institution Website</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <!-- Navigation Bar -->
    <header>
        <nav>
            <div class="logo">
                <h1>Institution Name</h1>
            </div>
            <ul class="nav-links">
                <li><a href="#home">Home</a></li>
                <li><a href="#about">About</a></li>
                <li><a href="#courses">Courses</a></li>
                <li><a href="#contact">Contact</a></li>
            </ul>
        </nav>
    </header>

    <!-- Hero Section -->
    <section id="home" class="hero">
        <div class="hero-content">
            <h1>Welcome to Our Institution</h1>
            <p>Empowering the future, shaping the world</p>
            <a href="#about" class="btn">Learn More</a>
        </div>
    </section>

    <!-- About Section -->
    <section id="about" class="about">
        <div class="about-content">
            <h2>About Us</h2>
            <p>We are a renowned institution offering world-class education to shape the leaders of tomorrow. With a rich history and a commitment to excellence, we provide students with the tools to succeed in their careers.</p>
        </div>
    </section>

    <!-- Courses Section -->
    <section id="courses" class="courses">
        <div class="courses-content">
            <h2>Our Courses</h2>
            <div class="course-list">
                <div class="course">
                    <h3>Course 1</h3>
                    <p>Introduction to programming, covering the basics of coding and software development.</p>
                </div>
                <div class="course">
                    <h3>Course 2</h3>
                    <p>Data science and machine learning fundamentals with hands-on experience.</p>
                </div>
                <div class="course">
                    <h3>Course 3</h3>
                    <p>Advanced web development and frameworks like React and Node.js.</p>
                </div>
            </div>
        </div>
    </section>

    <!-- Contact Section -->
    <section id="contact" class="contact">
        <div class="contact-content">
            <h2>Contact Us</h2>
            <form id="contactForm" onsubmit="return validateForm()">
                <div>
                    <label for="name">Name:</label>
                    <input type="text" id="name" name="name" required>
                </div>
                <div>
                    <label for="email">Email:</label>
                    <input type="email" id="email" name="email" required>
                </div>
                <div>
                    <label for="message">Message:</label>
                    <textarea id="message" name="message" required></textarea>
                </div>
                <button type="submit" class="btn">Submit</button>
                <p id="formMessage"></p>
            </form>
        </div>
    </section>

    <!-- Footer -->
    <footer>
        <div class="footer-content">
            <p>&copy; 2025 Institution Name. All rights reserved.</p>
        </div>
    </footer>

    <script src="scripts.js"></script>
    <link rel="stylesheet" href="dinesh2.css">
</body>
</html>
