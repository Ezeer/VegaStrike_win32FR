
AI FOR Vega-Strike 
by ezee

Hi .

AI is a subject that passionate me , and it is also a very important part of any video game .
In more than one thread , for different subjects , the case of AI is exposed , alongside of GameLogic .

As we make and play a space shooter ( with sim elements  :wink: ) , it's natural to have
an AI able to pilot and fight , follow a path etc ...
That is done actually , implemented in c++ and translated in python :

Quote:
typedef PythonAI< FireAt >PythonAIFireAt;
PYTHON_BEGIN_INHERIT_CLASS( VS, PythonAIFireAt, FireAt, "PythonAI" )
PYTHON_DEFINE_METHOD_DEFAULT( Class, &FireAt::Execute, "Execute", PythonAI< FireAt >::default_Execute );
PYTHON_DEFINE_METHOD_DEFAULT( Class, &FireAt::ChooseTarget, "ChooseTarget", PythonAI< FireAt >::default_ChooseTarget );
PYTHON_DEFINE_METHOD_DEFAULT( Class, &FireAt::SetParent, "init", PythonAI< FireAt >::default_SetParent );
PYTHON_DEFINE_METHOD( Class, &FireAt::GetParent, "GetParent" );
PYTHON_DEFINE_METHOD( Class, &FireAt::AddReplaceLastOrder, "AddReplaceLastOrder" );
PYTHON_DEFINE_METHOD( Class, &FireAt::ExecuteLastScriptFor, "ExecuteLastScriptFor" );
PYTHON_DEFINE_METHOD( Class, &FireAt::FaceTarget, "FaceTarget" );
PYTHON_DEFINE_METHOD( Class, &FireAt::FaceTargetITTS, "FaceTargetITTS" );
PYTHON_DEFINE_METHOD( Class, &FireAt::MatchLinearVelocity, "MatchLinearVelocity" );
PYTHON_DEFINE_METHOD( Class, &FireAt::MatchAngularVelocity, "MatchAngularVelocity" );
PYTHON_DEFINE_METHOD( Class, &FireAt::ChangeHeading, "ChangeHeading" );
PYTHON_DEFINE_METHOD( Class, &FireAt::ChangeLocalDirection, "ChangeLocalDirection" );
PYTHON_DEFINE_METHOD( Class, &FireAt::MoveTo, "MoveTo" );
PYTHON_DEFINE_METHOD( Class, &FireAt::MatchVelocity, "MatchVelocity" );
PYTHON_DEFINE_METHOD( Class, &FireAt::Cloak, "Cloak" );
PYTHON_DEFINE_METHOD( Class, &FireAt::FormUp, "FormUp" );
PYTHON_DEFINE_METHOD( Class, &FireAt::FormUpToOwner, "FormUpToOwner" );
PYTHON_DEFINE_METHOD( Class, &FireAt::FaceDirection, "FaceDirection" );
PYTHON_DEFINE_METHOD( Class, &FireAt::XMLScript, "XMLScript" );
PYTHON_DEFINE_METHOD( Class, &FireAt::LastPythonScript, "LastPythonScript" );
PYTHON_END_CLASS( VS, FireAt )


The previous list was shown to argument for this idea that AI could ( and should ) be
extended to other categories than FIGHT .

I remember numerous threads were the economical part of the game introduced a specialized gameLogic , probably done through the AI class .

As Klauss is working on the build of TRADE LANES , i think that this is an occasion
to talk about AI for that .
That rely on how the systems are populated , and what the AI is able to do by itself .

The Gamelogic and the Gameplay are certainly the two big components that an AI system
has to deal with .

The GameLogic what is it ?

Perhaps the compound and the result of all the events that occur in the main loop of a game .
In Vegastrike : Explore solar systems , earn money with battle missions , upgrade our ship , try to stay alive and have fun . ( in short )
The GameLogic core is how the program is oriented to achieve that Gameplay .
Today , the Game Logic is scripted , for the most part in python .

What is an AI ?
AI stands for Artificial Intelligence .
Artificial , but limited by what ?
Limited by the number of BEHAVIORS , SENSORS , ACTIONS .
AI could also be considered as a GameLogic Agent , like it's the case today :

You go to the base's computer , choose a mission , take a beer and jump in your cockpit.
You expect a certain action , in this GAMEPLAY .
The GAMELOGIC will launch in the background a flightgroup , to produce content for this specific gameplay .

So what ?

I think that AI could be more than GameLogic Agents , and that they could be themselves
the GameLogic .

Someone in the wiki said that the NPCs and the AI in general should have a homeland each one .
I think this is the first step in favor of the independance day's of the AI agents .
_ Give them a location in time and space .
_ Give them behaviors in that time and space ( QUIET , AGRESSIVE , CURIOUS , MAD ...)
_ Give them sensors to understand geographical , astronomical , economical , cultural and political events .
_Give them Actions to create or answer to events
_Give them a technology/industry to produce tools .

And watch what will happen ?
( with tools build vessels , with vessels explore , with explore encounter , with encounter
make peace or war )
I would be happy to develop with you this idea .

My first question is : 
_ Will we have to code new C++ code or what we already have with python will be sufficient ?

edit : In wiki , Development:Political system , i've found a source of details that could
serve in a political behavior tree http://wiki.vega-strike.org/Development ... cal_system


