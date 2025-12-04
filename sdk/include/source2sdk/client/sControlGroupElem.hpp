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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class sControlGroupElem
        {
        public:
            char m_UnitName[260]; // 0x_            
            char m_UnitLabel[260]; // 0x_            
            std::uint8_t m_unUnitLabelIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hEntity;
            char m_hEntity[0x_]; // 0x_            
            bool m_bIsIllusion; // 0x_            
            char m_IllusionLabel[260]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_UnitName) == 0x_);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_UnitLabel) == 0x_);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_unUnitLabelIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_hEntity) == 0x_);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_bIsIllusion) == 0x_);
        static_assert(offsetof(source2sdk::client::sControlGroupElem, m_IllusionLabel) == 0x_);
        
        static_assert(sizeof(source2sdk::client::sControlGroupElem) == 0x_);
    };
};
