#pragma once
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
    // Size: 0x1ed0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_CrystalMaiden : public server::CDOTA_BaseNPC_Hero
    {
    public:
        int32_t m_iParticleMouthIndex; // 0x1ec8        
        int32_t m_iParticleHandRIndex; // 0x1ecc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_CrystalMaiden because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_CrystalMaiden) == 0x1ed0);
};
