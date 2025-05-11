#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/AimMatrixBlendMode.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CBlendCurve.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"
#include "source2sdk/modellib/CAnimAttachment.hpp"

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: true
        // Size: 0xe0
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct AimMatrixOpFixedSettings_t
        {
        public:
            source2sdk::modellib::CAnimAttachment m_attachment; // 0x0            
            source2sdk::animgraphlib::CAnimInputDamping m_damping; // 0x80            
            source2sdk::animgraphlib::CPoseHandle m_poseCacheHandles[10]; // 0x90            
            source2sdk::animgraphlib::AimMatrixBlendMode m_eBlendMode; // 0xb8            
            float m_flMaxYawAngle; // 0xbc            
            float m_flMaxPitchAngle; // 0xc0            
            std::int32_t m_nSequenceMaxFrame; // 0xc4            
            std::int32_t m_nBoneMaskIndex; // 0xc8            
            bool m_bTargetIsPosition; // 0xcc            
            bool m_bUseBiasAndClamp; // 0xcd            
            uint8_t _pad00ce[0x2]; // 0xce
            float m_flBiasAndClampYawOffset; // 0xd0            
            float m_flBiasAndClampPitchOffset; // 0xd4            
            source2sdk::animgraphlib::CBlendCurve m_biasAndClampBlendCurve; // 0xd8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_attachment) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_damping) == 0x80);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_poseCacheHandles) == 0x90);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_eBlendMode) == 0xb8);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flMaxYawAngle) == 0xbc);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flMaxPitchAngle) == 0xc0);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_nSequenceMaxFrame) == 0xc4);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_nBoneMaskIndex) == 0xc8);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_bTargetIsPosition) == 0xcc);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_bUseBiasAndClamp) == 0xcd);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flBiasAndClampYawOffset) == 0xd0);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flBiasAndClampPitchOffset) == 0xd4);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_biasAndClampBlendCurve) == 0xd8);
        
        static_assert(sizeof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t) == 0xe0);
    };
};
