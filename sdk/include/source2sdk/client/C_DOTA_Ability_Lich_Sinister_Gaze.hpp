#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x620
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "float m_flLongestGazeDuration"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Lich_Sinister_Gaze : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float m_flLongestGazeDuration; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        // m_hAffectedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAffectedEntities;
        char m_hAffectedEntities[0x18]; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Lich_Sinister_Gaze because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Lich_Sinister_Gaze) == 0x620);
};
