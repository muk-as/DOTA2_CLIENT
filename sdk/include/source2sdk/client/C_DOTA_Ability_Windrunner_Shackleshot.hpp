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
    // Size: 0x638
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Windrunner_Shackleshot : public client::C_DOTABaseAbility
    {
    public:
        int32_t shackle_count; // 0x600        
        Vector m_vArrowAvgPos; // 0x604        
        Vector m_vArrowStartPos; // 0x610        
        Vector m_vArrowStartPos2; // 0x61c        
        Vector m_vArrowStartPos3; // 0x628        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x634        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Windrunner_Shackleshot because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Windrunner_Shackleshot) == 0x638);
};
