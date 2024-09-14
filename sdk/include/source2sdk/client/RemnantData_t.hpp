#pragma once
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
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct RemnantData_t
    {
    public:
        // m_hRemnant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRemnant;
        char m_hRemnant[0x4]; // 0x0        
        int32_t m_nProjectileHandle; // 0x4        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RemnantData_t, m_hRemnant) == 0x0);
    static_assert(offsetof(RemnantData_t, m_nProjectileHandle) == 0x4);
    
    static_assert(sizeof(RemnantData_t) == 0x8);
};
