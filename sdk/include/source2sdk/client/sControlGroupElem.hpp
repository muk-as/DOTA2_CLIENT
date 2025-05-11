#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            std::uint8_t m_unUnitLabelIndex; // 0x208            
            uint8_t _pad0209[0x3]; // 0x209
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x20c            
            bool m_bIsIllusion; // 0x210            
            char m_IllusionLabel[260]; // 0x211            
            uint8_t _pad0315[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_UnitName) == 0x0);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_UnitLabel) == 0x104);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_unUnitLabelIndex) == 0x208);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_hEntity) == 0x20c);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_bIsIllusion) == 0x210);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_IllusionLabel) == 0x211);
        
        static_assert(sizeof(source2sdk::client::sControlGroupElem) == 0x318);
    };
};
