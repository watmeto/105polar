#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <math.h>
void	pause();
void option1(SDL_Surface *ecran);
void option2(SDL_Surface *ecran);
void option4(SDL_Surface *ecran);
void option4(SDL_Surface *ecran);

int	main(int ac, char **av)
{
if (ac > 1)
{

	// initialize SDL video
	if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "Unable to init SDL: %s\n", SDL_GetError() );
		return 1;
	}

	SDL_Surface *ecran = NULL, *texte = NULL;
	ecran = SDL_SetVideoMode(510, 550,16, SDL_HWSURFACE | SDL_DOUBLEBUF);

	if ( !ecran )
	{
		printf("Unable to set 640x500 video: %s\n", SDL_GetError());
		return 1;
	}


	SDL_Event event;
	if (ecran == NULL)
	{
		printf("Error initialisation \n");
		exit(EXIT_FAILURE);
	}
	SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
	SDL_Flip(ecran);


if (av[1][0] == '1')
	option1(ecran);
if (av[1][0] == '2')
	option2(ecran);
if (av[1][0] == '3')
	option4(ecran);
if (av[1][0] == '4')
	option4(ecran);


	SDL_Flip(ecran);
	pause();
	exit(EXIT_SUCCESS);
	SDL_Quit();

}
}


void pause()
{
	int continuer = 1;
	SDL_Event event;

	while (continuer)
	{
		SDL_WaitEvent(&event);
		switch(event.type)
		{
			case SDL_QUIT:
				continuer = 0;
		}
	}
}

void option1(SDL_Surface *ecran)
{
	SDL_Surface *texte = NULL;
	TTF_Init();
	SDL_Rect  positionTexte;
	positionTexte.x = 0;
	positionTexte.y = 0;
	TTF_Font *police = NULL;
	police = TTF_OpenFont("img/angelina.ttf", 65);
	SDL_Color couleur = {167, 156, 156};
	texte = TTF_RenderText_Blended(police, ".", couleur);

	float angle = 0;
	int i = 0;
	float temp;

	while (angle < 20*M_PI)
	{

		positionTexte.x = (int)(cos((7*angle)/2)*cos(angle)*250)+250;
		positionTexte.y = (int)(cos((7*angle)/2)*sin(angle)*250)+250;

		SDL_BlitSurface(texte, NULL, ecran, &positionTexte);


		printf("x = %d y = %d \n", positionTexte.x, positionTexte.y);
		angle += 0.001;

		i++;
	}

}

void option2(SDL_Surface *ecran)
{
	SDL_Surface *texte = NULL;
	TTF_Init();
	SDL_Rect  positionTexte;
	positionTexte.x = 0;
	positionTexte.y = 0;
	TTF_Font *police = NULL;
	police = TTF_OpenFont("img/angelina.ttf", 65);
	SDL_Color couleur = {167, 156, 156};
	texte = TTF_RenderText_Blended(police, ".", couleur);

	float angle = 0;
	int i = 0;
	float temp;

	while (angle < 20*M_PI)
	{

		positionTexte.x = (int)(cos((5*angle)/4 + 1/3)*cos(angle)*250)+250;
		positionTexte.y = (int)(cos((5*angle)/4 + 1/3)*sin(angle)*250)+250;

		SDL_BlitSurface(texte, NULL, ecran, &positionTexte);


		printf("x = %d y = %d \n", positionTexte.x, positionTexte.y);
		angle += 0.001;

		i++;
	}

}


void option3(SDL_Surface *ecran)
{
	SDL_Surface *texte = NULL;
	TTF_Init();
	SDL_Rect  positionTexte;
	positionTexte.x = 0;
	positionTexte.y = 0;
	TTF_Font *police = NULL;
	police = TTF_OpenFont("img/angelina.ttf", 65);
	SDL_Color couleur = {167, 156, 156};
	texte = TTF_RenderText_Blended(police, ".", couleur);

	float angle = 0;
	int i = 0;
	float temp;

	while (angle < 20*M_PI)
	{

		positionTexte.x = (int)(cos((7*angle)/10 + 7/3)*cos(angle)*250)+250;
		positionTexte.y = (int)(cos((7*angle)/10 + 7/3)*sin(angle)*250)+250;

		SDL_BlitSurface(texte, NULL, ecran, &positionTexte);


		printf("x = %d y = %d \n", positionTexte.x, positionTexte.y);
		angle += 0.001;

		i++;
	}

}


void option4(SDL_Surface *ecran)
{
	SDL_Surface *texte = NULL;
	TTF_Init();
	SDL_Rect  positionTexte;
	positionTexte.x = 0;
	positionTexte.y = 0;
	TTF_Font *police = NULL;
	police = TTF_OpenFont("img/angelina.ttf", 65);
	SDL_Color couleur = {167, 156, 156};
	texte = TTF_RenderText_Blended(police, ".", couleur);

	float angle = 0;
	int i = 0;
	float temp;

	while (angle < 20*M_PI)
	{

		positionTexte.x = (int)(cos((9*angle)/10)*cos(angle)*250)+250;
		positionTexte.y = (int)(cos((9*angle)/10)*sin(angle)*250)+250;

		SDL_BlitSurface(texte, NULL, ecran, &positionTexte);


		printf("x = %d y = %d \n", positionTexte.x, positionTexte.y);
		angle += 0.001;

		i++;
	}

}
