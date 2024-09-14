#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_HallOfFame_Glow : public client::CDOTA_Buff
    {
    public:
        // m_vecGlowingPlayerIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PlayerID_t> m_vecGlowingPlayerIDs;
        char m_vecGlowingPlayerIDs[0x18]; // 0x16e8        
        // m_vecGlowingPlayerIDs2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PlayerID_t> m_vecGlowingPlayerIDs2;
        char m_vecGlowingPlayerIDs2[0x18]; // 0x1700        
        
        // Static fields:
        static CUtlVector<client::PlayerID_t> &Get_s_vecGlowingPlayerIDs() {return *reinterpret_cast<CUtlVector<client::PlayerID_t>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CDOTA_Modifier_HallOfFame_Glow")->GetStaticFields()[0]->m_pInstance);};
        static CUtlVector<client::PlayerID_t> &Get_s_vecGlowingPlayerIDs2() {return *reinterpret_cast<CUtlVector<client::PlayerID_t>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CDOTA_Modifier_HallOfFame_Glow")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_HallOfFame_Glow because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_HallOfFame_Glow) == 0x1718);
};
