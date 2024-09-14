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
    // Size: 0x318
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class sControlGroupElem
    {
    public:
        char m_UnitName[260]; // 0x0        
        char m_UnitLabel[260]; // 0x104        
        uint8_t m_unUnitLabelIndex; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x209[0x3]; // 0x209
        // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEntity;
        char m_hEntity[0x4]; // 0x20c        
        bool m_bIsIllusion; // 0x210        
        char m_IllusionLabel[260]; // 0x211        
        [[maybe_unused]] std::uint8_t pad_0x315[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(sControlGroupElem, m_UnitName) == 0x0);
    static_assert(offsetof(sControlGroupElem, m_UnitLabel) == 0x104);
    static_assert(offsetof(sControlGroupElem, m_unUnitLabelIndex) == 0x208);
    static_assert(offsetof(sControlGroupElem, m_hEntity) == 0x20c);
    static_assert(offsetof(sControlGroupElem, m_bIsIllusion) == 0x210);
    static_assert(offsetof(sControlGroupElem, m_IllusionLabel) == 0x211);
    
    static_assert(sizeof(sControlGroupElem) == 0x318);
};
