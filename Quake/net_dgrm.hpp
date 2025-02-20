/*
Copyright (C) 1996-2001 Id Software, Inc.
Copyright (C) 2010-2014 QuakeSpasm developers
Copyright (C) 2020-2021 Vittorio Romeo

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/

#pragma once

int Datagram_Init();
void Datagram_Listen(bool state);
int Datagram_QueryAddresses(qhostaddr_t* addresses, int maxaddresses); // QSS
bool Datagram_SearchForHosts(bool xmit);                               // QSS
qsocket_t* Datagram_Connect(const char* host);
qsocket_t* Datagram_CheckNewConnections();
qsocket_t* Datagram_GetAnyMessage(); // QSS
int Datagram_GetMessage(qsocket_t* sock);
int Datagram_SendMessage(qsocket_t* sock, sizebuf_t* data);
int Datagram_SendUnreliableMessage(qsocket_t* sock, sizebuf_t* data);
bool Datagram_CanSendMessage(qsocket_t* sock);
bool Datagram_CanSendUnreliableMessage(qsocket_t* sock);
void Datagram_Close(qsocket_t* sock);
void Datagram_Shutdown();
