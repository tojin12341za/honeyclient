#!/usr/bin/perl -w

use strict;
use Test::More 'no_plan';
$| = 1;



# =begin testing
{
# Make sure ExtUtils::MakeMaker loads.
BEGIN { use_ok('ExtUtils::MakeMaker', qw(prompt)) or diag("Can't load ExtUtils::MakeMaker package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('ExtUtils::MakeMaker');
can_ok('ExtUtils::MakeMaker', 'prompt');
use ExtUtils::MakeMaker qw(prompt);

# Make sure Log::Log4perl loads
BEGIN { use_ok('Log::Log4perl', qw(:nowarn))
        or diag("Can't load Log::Log4perl package. Check to make sure the package library is correctly listed within the path.");
       
        # Suppress all logging messages, since we need clean output for unit testing.
        Log::Log4perl->init({
            "log4perl.rootLogger"                               => "DEBUG, Buffer",
            "log4perl.appender.Buffer"                          => "Log::Log4perl::Appender::TestBuffer",
            "log4perl.appender.Buffer.min_level"                => "fatal",
            "log4perl.appender.Buffer.layout"                   => "Log::Log4perl::Layout::PatternLayout",
            "log4perl.appender.Buffer.layout.ConversionPattern" => "%d{yyyy-MM-dd HH:mm:ss} %5p [%M] (%F:%L) - %m%n",
        });
}
require_ok('Log::Log4perl');
use Log::Log4perl qw(:easy);

# Make sure HoneyClient::Util::Config loads.
BEGIN { use_ok('HoneyClient::Util::Config', qw(getVar))
        or diag("Can't load HoneyClient::Util::Config package.  Check to make sure the package library is correctly listed within the path.");

        # Suppress all logging messages, since we need clean output for unit testing.
        Log::Log4perl->init({
            "log4perl.rootLogger"                               => "DEBUG, Buffer",
            "log4perl.appender.Buffer"                          => "Log::Log4perl::Appender::TestBuffer",
            "log4perl.appender.Buffer.min_level"                => "fatal",
            "log4perl.appender.Buffer.layout"                   => "Log::Log4perl::Layout::PatternLayout",
            "log4perl.appender.Buffer.layout.ConversionPattern" => "%d{yyyy-MM-dd HH:mm:ss} %5p [%M] (%F:%L) - %m%n",
        });
}
require_ok('HoneyClient::Util::Config');
can_ok('HoneyClient::Util::Config', 'getVar');
use HoneyClient::Util::Config qw(getVar);

# Suppress all logging messages, since we need clean output for unit testing.
Log::Log4perl->init({
    "log4perl.rootLogger"                               => "DEBUG, Buffer",
    "log4perl.appender.Buffer"                          => "Log::Log4perl::Appender::TestBuffer",
    "log4perl.appender.Buffer.min_level"                => "fatal",
    "log4perl.appender.Buffer.layout"                   => "Log::Log4perl::Layout::PatternLayout",
    "log4perl.appender.Buffer.layout.ConversionPattern" => "%d{yyyy-MM-dd HH:mm:ss} %5p [%M] (%F:%L) - %m%n",
});

# Make sure the module loads properly, with the exportable
# functions shared.
BEGIN { use_ok('HoneyClient::Manager') or diag("Can't load HoneyClient::Manager package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('HoneyClient::Manager');
use HoneyClient::Manager;

# Make sure the Virtualization Library loads.
my $VM_MODE = getVar(name => "virtualization_mode", namespace => "HoneyClient::Manager") . "::Clone";
require_ok($VM_MODE);
eval "require $VM_MODE";

# Make sure HoneyClient::Manager::Firewall::Client loads.
BEGIN { use_ok('HoneyClient::Manager::Firewall::Client') or diag("Can't load HoneyClient::Manager::Firewall::Client package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('HoneyClient::Manager::Firewall::Client');
use HoneyClient::Manager::Firewall::Client;

# Make sure HoneyClient::Util::Config loads.
BEGIN { use_ok('HoneyClient::Util::Config', qw(getVar)) or diag("Can't load HoneyClient::Util::Config package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('HoneyClient::Util::Config');
can_ok('HoneyClient::Util::Config', 'getVar');
use HoneyClient::Util::Config qw(getVar);

# Make sure HoneyClient::Manager::Database loads.
BEGIN { use_ok('HoneyClient::Manager::Database') or diag("Can't load HoneyClient::Manager::Database package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('HoneyClient::Manager::Database');
use HoneyClient::Manager::Database;

# Make sure Data::Dumper loads
BEGIN { use_ok('Data::Dumper')
        or diag("Can't load Data::Dumper package. Check to make sure the package library is correctly listed within the path."); }
require_ok('Data::Dumper');
use Data::Dumper;

# Make sure Sys::Hostname loads.
BEGIN { use_ok('Sys::Hostname') or diag("Can't load Sys::Hostname package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('Sys::Hostname');
use Sys::Hostname;

# Make sure Sys::HostIP loads.
BEGIN { use_ok('Sys::HostIP') or diag("Can't load Sys::HostIP package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('Sys::HostIP');
use Sys::HostIP;

# Make sure Net::Stomp loads.
BEGIN { use_ok('Net::Stomp') or diag("Can't load Net::Stomp package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('Net::Stomp');
use Net::Stomp;

# Make sure HoneyClient::Message loads.
use lib qw(blib/lib blib/arch/auto/HoneyClient/Message);
BEGIN { use_ok('HoneyClient::Message') or diag("Can't load HoneyClient::Message package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('HoneyClient::Message');
use HoneyClient::Message;

# Make sure Data::UUID loads.
BEGIN { use_ok('Data::UUID') or diag("Can't load Data::UUID package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('Data::UUID');
use Data::UUID;

# Make sure HoneyClient::Util::DateTime loads.
BEGIN { use_ok('HoneyClient::Util::DateTime') or diag("Can't load HoneyClient::Util::DateTime package.  Check to make sure the package library is correctly listed within the path."); }
require_ok('HoneyClient::Util::DateTime');
use HoneyClient::Util::DateTime;
}



# =begin testing
{
SKIP: {
    skip "HoneyClient::Manager->run() can't be easily tested, yet.", 1;
}
}




1;
