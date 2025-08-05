#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_FuncBrush.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xad8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTAAmbientCreatureParticleZone : public source2sdk::client::C_FuncBrush
        {
        public:
            char m_szModelName[64]; // 0x998            
            char m_szAreaName[256]; // 0x9d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAAmbientCreatureParticleZone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAAmbientCreatureParticleZone) == 0xad8);
    };
};
