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
        // Size: 0xf0
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
            source2sdk::animgraphlib::CPoseHandle m_poseCacheHandles[10]; // 0x98            
            source2sdk::animgraphlib::AimMatrixBlendMode m_eBlendMode; // 0xc0            
            float m_flMaxYawAngle; // 0xc4            
            float m_flMaxPitchAngle; // 0xc8            
            std::int32_t m_nSequenceMaxFrame; // 0xcc            
            std::int32_t m_nBoneMaskIndex; // 0xd0            
            bool m_bTargetIsPosition; // 0xd4            
            bool m_bUseBiasAndClamp; // 0xd5            
            uint8_t _pad00d6[0x2]; // 0xd6
            float m_flBiasAndClampYawOffset; // 0xd8            
            float m_flBiasAndClampPitchOffset; // 0xdc            
            source2sdk::animgraphlib::CBlendCurve m_biasAndClampBlendCurve; // 0xe0            
            uint8_t _pad00e8[0x8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_attachment) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_damping) == 0x80);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_poseCacheHandles) == 0x98);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_eBlendMode) == 0xc0);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flMaxYawAngle) == 0xc4);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flMaxPitchAngle) == 0xc8);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_nSequenceMaxFrame) == 0xcc);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_nBoneMaskIndex) == 0xd0);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_bTargetIsPosition) == 0xd4);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_bUseBiasAndClamp) == 0xd5);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flBiasAndClampYawOffset) == 0xd8);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_flBiasAndClampPitchOffset) == 0xdc);
        static_assert(offsetof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t, m_biasAndClampBlendCurve) == 0xe0);
        
        static_assert(sizeof(source2sdk::animgraphlib::AimMatrixOpFixedSettings_t) == 0xf0);
    };
};
