#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"

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
        // static metadata: MNetworkVarNames "char m_messageText"
        #pragma pack(push, 1)
        class C_PointClientUIWorldTextPanel : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            // metadata: MNetworkEnable
            char m_messageText[512]; // 0x_            
            
            // Datamap fields:
            // void InputToggle; // 0x_
            // CUtlSymbolLarge InputSetMessage; // 0x_
            // int32_t InputSetIntMessage; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointClientUIWorldTextPanel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointClientUIWorldTextPanel) == 0x_);
    };
};
