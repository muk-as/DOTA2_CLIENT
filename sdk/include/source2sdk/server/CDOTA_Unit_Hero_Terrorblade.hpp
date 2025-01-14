#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1ee0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "uint32 m_nArcanaColor"
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Terrorblade : public server::CDOTA_BaseNPC_Hero
    {
    public:
        client::ParticleIndex_t m_nFXDeath; // 0x1ec8        
        [[maybe_unused]] std::uint8_t pad_0x1ecc[0x4]; // 0x1ecc
        CUtlString m_szResponseCriteria; // 0x1ed0        
        // metadata: MNetworkEnable
        uint32_t m_nArcanaColor; // 0x1ed8        
        [[maybe_unused]] std::uint8_t pad_0x1edc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Terrorblade because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Terrorblade) == 0x1ee0);
};
