#pragma once
#include "source2sdk/client/ArtyGameObjectDef_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ArtyCannonDef_t : public client::ArtyGameObjectDef_t
    {
    public:
        bool m_bDirectAimAtTarget; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb1[0x7]; // 0xb1
        // m_vecWeapons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecWeapons;
        char m_vecWeapons[0x18]; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xd0[0x18]; // 0xd0
        Vector2D m_vShotOffset; // 0xe8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in ArtyCannonDef_t because it is not a standard-layout class
    static_assert(sizeof(ArtyCannonDef_t) == 0xf0);
};