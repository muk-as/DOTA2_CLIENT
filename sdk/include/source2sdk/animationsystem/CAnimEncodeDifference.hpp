#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/CAnimBoneDifference.hpp"
#include "source2sdk/animationsystem/CAnimMorphDifference.hpp"
#include "source2sdk/animationsystem/CAnimUserDifference.hpp"

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animationsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAnimEncodeDifference
        {
        public:
            // m_boneArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimBoneDifference> m_boneArray;
            char m_boneArray[0x_]; // 0x_            
            // m_morphArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimMorphDifference> m_morphArray;
            char m_morphArray[0x_]; // 0x_            
            // m_userArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::animationsystem::CAnimUserDifference> m_userArray;
            char m_userArray[0x_]; // 0x_            
            // m_bHasRotationBitArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_bHasRotationBitArray;
            char m_bHasRotationBitArray[0x_]; // 0x_            
            // m_bHasMovementBitArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_bHasMovementBitArray;
            char m_bHasMovementBitArray[0x_]; // 0x_            
            // m_bHasMorphBitArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_bHasMorphBitArray;
            char m_bHasMorphBitArray[0x_]; // 0x_            
            // m_bHasUserBitArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::uint8_t> m_bHasUserBitArray;
            char m_bHasUserBitArray[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodeDifference, m_boneArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodeDifference, m_morphArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodeDifference, m_userArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodeDifference, m_bHasRotationBitArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodeDifference, m_bHasMovementBitArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodeDifference, m_bHasMorphBitArray) == 0x_);
        static_assert(offsetof(source2sdk::animationsystem::CAnimEncodeDifference, m_bHasUserBitArray) == 0x_);
        
        static_assert(sizeof(source2sdk::animationsystem::CAnimEncodeDifference) == 0x_);
    };
};
