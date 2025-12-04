#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBasePlatTrain.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncPlat : public source2sdk::server::CBasePlatTrain
        {
        public:
            CUtlSymbolLarge m_sNoise; // 0x_            
            
            // Datamap fields:
            // void CFuncPlatPlatUse; // 0x_
            // void CFuncPlatCallGoDown; // 0x_
            // void CFuncPlatCallHitTop; // 0x_
            // void CFuncPlatCallHitBottom; // 0x_
            // void InputToggle; // 0x_
            // void InputGoUp; // 0x_
            // void InputGoDown; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncPlat because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncPlat) == 0x_);
    };
};
