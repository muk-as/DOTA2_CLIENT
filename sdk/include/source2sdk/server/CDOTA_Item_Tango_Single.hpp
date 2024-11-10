#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x678
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_Item_Tango_Single : public server::CDOTA_Item
    {
    public:
        entity2::GameTime_t m_flCreationTime; // 0x670        
        float duration_to_use; // 0x674        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Tango_Single because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Tango_Single) == 0x678);
};
