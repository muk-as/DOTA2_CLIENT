#pragma once
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x660
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Demonicon : public server::CDOTA_Item
    {
    public:
        // m_hDemonSummons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hDemonSummons;
        char m_hDemonSummons[0x18]; // 0x648        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Demonicon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Demonicon) == 0x660);
};
