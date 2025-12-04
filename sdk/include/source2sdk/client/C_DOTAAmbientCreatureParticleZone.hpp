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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTAAmbientCreatureParticleZone : public source2sdk::client::C_FuncBrush
        {
        public:
            char m_szModelName[64]; // 0x_            
            char m_szAreaName[256]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAAmbientCreatureParticleZone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAAmbientCreatureParticleZone) == 0x_);
    };
};
