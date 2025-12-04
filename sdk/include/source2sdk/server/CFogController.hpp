#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/fogparams_t.hpp"

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
        // MNetworkNoBase
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "fogparams_t m_fog"
        #pragma pack(push, 1)
        class CFogController : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::server::fogparams_t m_fog; // 0x_            
            bool m_bUseAngles; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iChangedVariables; // 0x_            
            
            // Datamap fields:
            // float InputSetStartDist; // 0x_
            // float InputSetEndDist; // 0x_
            // float InputSetMaxDensity; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // Color InputSetColor; // 0x_
            // Color InputSetColorSecondary; // 0x_
            // int32_t InputSetFarZ; // 0x_
            // CUtlSymbolLarge InputSetAngles; // 0x_
            // float InputSet2DSkyboxFogFactor; // 0x_
            // Color InputSetColorLerpTo; // 0x_
            // Color InputSetColorSecondaryLerpTo; // 0x_
            // float InputSetStartDistLerpTo; // 0x_
            // float InputSetEndDistLerpTo; // 0x_
            // float InputSetMaxDensityLerpTo; // 0x_
            // float InputSet2DSkyboxFogFactorLerpTo; // 0x_
            // void InputStartFogTransition; // 0x_
            // void CFogControllerSetLerpValues; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFogController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFogController) == 0x_);
    };
};
