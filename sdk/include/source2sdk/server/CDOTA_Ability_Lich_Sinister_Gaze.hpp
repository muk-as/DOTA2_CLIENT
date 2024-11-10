#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "float m_flLongestGazeDuration"
    #pragma pack(push, 1)
    class CDOTA_Ability_Lich_Sinister_Gaze : public server::CDOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float m_flLongestGazeDuration; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4]; // 0x5cc
        // m_hAffectedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hAffectedEntities;
        char m_hAffectedEntities[0x18]; // 0x5d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Lich_Sinister_Gaze because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Lich_Sinister_Gaze) == 0x5e8);
};
