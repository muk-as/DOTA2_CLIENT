#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Creature.hpp"
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
    // Size: 0x19f0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Unit_AghsFort_Creature_DungeonBat : public server::CDOTA_BaseNPC_Creature
    {
    public:
        client::ParticleIndex_t m_nFXAmbient; // 0x19e8        
        [[maybe_unused]] std::uint8_t pad_0x19ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_AghsFort_Creature_DungeonBat because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_AghsFort_Creature_DungeonBat) == 0x19f0);
};
