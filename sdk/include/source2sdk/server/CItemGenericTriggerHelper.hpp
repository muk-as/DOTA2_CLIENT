#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CItemGeneric;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CItemGenericTriggerHelper : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNotSaved
            // m_hParentItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CItemGeneric> m_hParentItem;
            char m_hParentItem[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CItemGenericTriggerHelperItemGenericTriggerHelperTouch; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemGenericTriggerHelper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemGenericTriggerHelper) == 0x_);
    };
};
