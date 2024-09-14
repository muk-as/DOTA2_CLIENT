#pragma once
#include "source2sdk/client/item_definition_index_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct WearableData_t
    {
    public:
        client::item_definition_index_t nItemDef; // 0x0        
        int32_t nSkin; // 0x4        
        int32_t nGroup; // 0x8        
        // hWearable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hWearable;
        char hWearable[0x4]; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WearableData_t, nItemDef) == 0x0);
    static_assert(offsetof(WearableData_t, nSkin) == 0x4);
    static_assert(offsetof(WearableData_t, nGroup) == 0x8);
    static_assert(offsetof(WearableData_t, hWearable) == 0xc);
    
    static_assert(sizeof(WearableData_t) == 0x10);
};
