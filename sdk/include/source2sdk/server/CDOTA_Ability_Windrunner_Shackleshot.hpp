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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Ability_Windrunner_Shackleshot : public server::CDOTABaseAbility
    {
    public:
        int32_t shackle_count; // 0x5c8        
        Vector m_vArrowAvgPos; // 0x5cc        
        Vector m_vArrowStartPos; // 0x5d8        
        Vector m_vArrowStartPos2; // 0x5e4        
        Vector m_vArrowStartPos3; // 0x5f0        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x5fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Windrunner_Shackleshot because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Windrunner_Shackleshot) == 0x600);
};
