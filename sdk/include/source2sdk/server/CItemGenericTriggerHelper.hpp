#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CItemGeneric;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x790
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CItemGenericTriggerHelper : public server::CBaseModelEntity
    {
    public:
        // m_hParentItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CItemGeneric> m_hParentItem;
        char m_hParentItem[0x4]; // 0x788        
        [[maybe_unused]] std::uint8_t pad_0x78c[0x4];
        
        // Datamap fields:
        // void CItemGenericTriggerHelperItemGenericTriggerHelperTouch; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemGenericTriggerHelper because it is not a standard-layout class
    static_assert(sizeof(CItemGenericTriggerHelper) == 0x790);
};
