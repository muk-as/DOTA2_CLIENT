#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Hero.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_ArcWarden : public client::C_DOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_nTalkFXIndex; // 0x1b88        
        client::ParticleIndex_t m_nFXDeath; // 0x1b8c        
        client::ParticleIndex_t m_nTempestFX; // 0x1b90        
        [[maybe_unused]] std::uint8_t pad_0x1b94[0x4];
        
        // Static fields:
        static CUtlStringToken &Get_s_NormalFacet() {return *reinterpret_cast<CUtlStringToken*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CDOTA_Unit_Hero_ArcWarden")->GetStaticFields()[0]->m_pInstance);};
        static CUtlStringToken &Get_s_ReverseFacet() {return *reinterpret_cast<CUtlStringToken*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CDOTA_Unit_Hero_ArcWarden")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_ArcWarden because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_ArcWarden) == 0x1b98);
};
