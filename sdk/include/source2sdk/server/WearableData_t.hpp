#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/item_definition_index_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct WearableData_t
        {
        public:
            source2sdk::client::item_definition_index_t nItemDef; // 0x_            
            std::int32_t nSkin; // 0x_            
            std::int32_t nGroup; // 0x_            
            // hWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> hWearable;
            char hWearable[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::WearableData_t, nItemDef) == 0x_);
        static_assert(offsetof(source2sdk::server::WearableData_t, nSkin) == 0x_);
        static_assert(offsetof(source2sdk::server::WearableData_t, nGroup) == 0x_);
        static_assert(offsetof(source2sdk::server::WearableData_t, hWearable) == 0x_);
        
        static_assert(sizeof(source2sdk::server::WearableData_t) == 0x_);
    };
};
