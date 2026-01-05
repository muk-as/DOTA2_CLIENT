#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Has VTable
        // Has Trivial Destructor
        // 
        // static metadata: MNetworkVarNames "Vector dirPrimary"
        // static metadata: MNetworkVarNames "Color colorPrimary"
        // static metadata: MNetworkVarNames "Color colorSecondary"
        // static metadata: MNetworkVarNames "Color colorPrimaryLerpTo"
        // static metadata: MNetworkVarNames "Color colorSecondaryLerpTo"
        // static metadata: MNetworkVarNames "float32 start"
        // static metadata: MNetworkVarNames "float32 end"
        // static metadata: MNetworkVarNames "float32 farz"
        // static metadata: MNetworkVarNames "float32 maxdensity"
        // static metadata: MNetworkVarNames "float32 exponent"
        // static metadata: MNetworkVarNames "float32 HDRColorScale"
        // static metadata: MNetworkVarNames "float32 skyboxFogFactor"
        // static metadata: MNetworkVarNames "float32 skyboxFogFactorLerpTo"
        // static metadata: MNetworkVarNames "float32 startLerpTo"
        // static metadata: MNetworkVarNames "float32 endLerpTo"
        // static metadata: MNetworkVarNames "float32 maxdensityLerpTo"
        // static metadata: MNetworkVarNames "GameTime_t lerptime"
        // static metadata: MNetworkVarNames "float32 duration"
        // static metadata: MNetworkVarNames "float32 blendtobackground"
        // static metadata: MNetworkVarNames "float32 scattering"
        // static metadata: MNetworkVarNames "float32 locallightscale"
        // static metadata: MNetworkVarNames "bool enable"
        // static metadata: MNetworkVarNames "bool blend"
        #pragma pack(push, 1)
        struct fogparams_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector dirPrimary; // 0x_            
            // metadata: MNetworkEnable
            Color colorPrimary; // 0x_            
            // metadata: MNetworkEnable
            Color colorSecondary; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            // metadata: MNotSaved
            Color colorPrimaryLerpTo; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            // metadata: MNotSaved
            Color colorSecondaryLerpTo; // 0x_            
            // metadata: MNetworkEnable
            float start; // 0x_            
            // metadata: MNetworkEnable
            float end; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            float farz; // 0x_            
            // metadata: MNetworkEnable
            float maxdensity; // 0x_            
            // metadata: MNetworkEnable
            float exponent; // 0x_            
            // metadata: MNetworkEnable
            float HDRColorScale; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            // metadata: MNotSaved
            float skyboxFogFactor; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            // metadata: MNotSaved
            float skyboxFogFactorLerpTo; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            // metadata: MNotSaved
            float startLerpTo; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            // metadata: MNotSaved
            float endLerpTo; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            // metadata: MNotSaved
            float maxdensityLerpTo; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t lerptime; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            float duration; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            float blendtobackground; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            float scattering; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "FogController"
            float locallightscale; // 0x_            
            // metadata: MNetworkEnable
            bool enable; // 0x_            
            // metadata: MNetworkEnable
            bool blend; // 0x_            
            // metadata: MNotSaved
            bool m_bPadding2; // 0x_            
            // metadata: MNotSaved
            bool m_bPadding; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::fogparams_t, dirPrimary) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, colorPrimary) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, colorSecondary) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, colorPrimaryLerpTo) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, colorSecondaryLerpTo) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, start) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, end) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, farz) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, maxdensity) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, exponent) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, HDRColorScale) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, skyboxFogFactor) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, skyboxFogFactorLerpTo) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, startLerpTo) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, endLerpTo) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, maxdensityLerpTo) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, lerptime) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, duration) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, blendtobackground) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, scattering) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, locallightscale) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, enable) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, blend) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, m_bPadding2) == 0x_);
        static_assert(offsetof(source2sdk::client::fogparams_t, m_bPadding) == 0x_);
        
        static_assert(sizeof(source2sdk::client::fogparams_t) == 0x_);
    };
};
