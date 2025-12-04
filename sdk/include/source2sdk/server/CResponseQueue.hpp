#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CAI_Expresser;
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
        #pragma pack(push, 1)
        class CResponseQueue
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_ExpresserTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CAI_Expresser*> m_ExpresserTargets;
            char m_ExpresserTargets[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CResponseQueue, m_ExpresserTargets) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CResponseQueue) == 0x_);
    };
};
