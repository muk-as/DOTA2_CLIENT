#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CHitBox.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CHitBoxSet
        {
        public:
            CUtlString m_name; // 0x_            
            std::uint32_t m_nNameHash; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_HitBoxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::modellib::CHitBox> m_HitBoxes;
            char m_HitBoxes[0x_]; // 0x_            
            CUtlString m_SourceFilename; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CHitBoxSet, m_name) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBoxSet, m_nNameHash) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBoxSet, m_HitBoxes) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CHitBoxSet, m_SourceFilename) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CHitBoxSet) == 0x_);
    };
};
