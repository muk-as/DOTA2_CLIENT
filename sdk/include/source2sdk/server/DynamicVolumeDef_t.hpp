#pragma once
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
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct DynamicVolumeDef_t
    {
    public:
        // m_target has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_target;
        char m_target[0x4]; // 0x0        
        int32_t m_nHullIdx; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x08[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DynamicVolumeDef_t, m_target) == 0x0);
    static_assert(offsetof(DynamicVolumeDef_t, m_nHullIdx) == 0x4);
    
    static_assert(sizeof(DynamicVolumeDef_t) == 0x18);
};
