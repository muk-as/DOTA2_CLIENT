#pragma once
#include "source2sdk/animationsystem/CAnimBoneDifference.hpp"
#include "source2sdk/animationsystem/CAnimMorphDifference.hpp"
#include "source2sdk/animationsystem/CAnimUserDifference.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xa8
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAnimEncodeDifference
    {
    public:
        // m_boneArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimBoneDifference> m_boneArray;
        char m_boneArray[0x18]; // 0x0        
        // m_morphArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimMorphDifference> m_morphArray;
        char m_morphArray[0x18]; // 0x18        
        // m_userArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::CAnimUserDifference> m_userArray;
        char m_userArray[0x18]; // 0x30        
        // m_bHasRotationBitArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_bHasRotationBitArray;
        char m_bHasRotationBitArray[0x18]; // 0x48        
        // m_bHasMovementBitArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_bHasMovementBitArray;
        char m_bHasMovementBitArray[0x18]; // 0x60        
        // m_bHasMorphBitArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_bHasMorphBitArray;
        char m_bHasMorphBitArray[0x18]; // 0x78        
        // m_bHasUserBitArray has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_bHasUserBitArray;
        char m_bHasUserBitArray[0x18]; // 0x90        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimEncodeDifference, m_boneArray) == 0x0);
    static_assert(offsetof(CAnimEncodeDifference, m_morphArray) == 0x18);
    static_assert(offsetof(CAnimEncodeDifference, m_userArray) == 0x30);
    static_assert(offsetof(CAnimEncodeDifference, m_bHasRotationBitArray) == 0x48);
    static_assert(offsetof(CAnimEncodeDifference, m_bHasMovementBitArray) == 0x60);
    static_assert(offsetof(CAnimEncodeDifference, m_bHasMorphBitArray) == 0x78);
    static_assert(offsetof(CAnimEncodeDifference, m_bHasUserBitArray) == 0x90);
    
    static_assert(sizeof(CAnimEncodeDifference) == 0xa8);
};
