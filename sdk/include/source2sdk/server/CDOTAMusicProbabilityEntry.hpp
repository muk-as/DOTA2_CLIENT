#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CDOTAMusicProbabilityEntry
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_flProbabilityElements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flProbabilityElements;
            char m_flProbabilityElements[0x_]; // 0x_            
            float m_flProbability; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTAMusicProbabilityEntry, m_flProbabilityElements) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTAMusicProbabilityEntry, m_flProbability) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTAMusicProbabilityEntry) == 0x_);
    };
};
