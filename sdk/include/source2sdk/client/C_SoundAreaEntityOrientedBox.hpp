#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_SoundAreaEntityBase.hpp"

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
        // 
        // static metadata: MNetworkVarNames "Vector m_vMin"
        // static metadata: MNetworkVarNames "Vector m_vMax"
        #pragma pack(push, 1)
        class C_SoundAreaEntityOrientedBox : public source2sdk::client::C_SoundAreaEntityBase
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vMin; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vMax; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundAreaEntityOrientedBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundAreaEntityOrientedBox) == 0x_);
    };
};
