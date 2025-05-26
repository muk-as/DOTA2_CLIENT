#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x290
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "HModelStrong m_hModel"
        // static metadata: MNetworkVarNames "bool m_bClientClothCreationSuppressed"
        // static metadata: MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
        // static metadata: MNetworkVarNames "int32 m_nBodyGroupChoices"
        // static metadata: MNetworkVarNames "int8 m_nIdealMotionType"
        #pragma pack(push, 1)
        class CModelState
        {
        public:
            uint8_t _pad0000[0xd0]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonModelChanged"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0xd0            
            CUtlSymbolLarge m_ModelName; // 0xd8            
            uint8_t _pad00e0[0x45]; // 0xe0
            // metadata: MNetworkEnable
            bool m_bClientClothCreationSuppressed; // 0x125            
            uint8_t _pad0126[0xba]; // 0x126
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
            std::uint64_t m_MeshGroupMask; // 0x1e0            
            uint8_t _pad01e8[0x48]; // 0x1e8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "bodyGroupChoiceChanged"
            // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_nBodyGroupChoices;
            char m_nBodyGroupChoices[0x18]; // 0x230            
            uint8_t _pad0248[0x32]; // 0x248
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
            std::int8_t m_nIdealMotionType; // 0x27a            
            std::int8_t m_nForceLOD; // 0x27b            
            std::int8_t m_nClothUpdateFlags; // 0x27c            
            uint8_t _pad027d[0x13];
            
            // Datamap fields:
            // void m_pVPhysicsAggregate; // 0x110
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CModelState, m_hModel) == 0xd0);
        static_assert(offsetof(source2sdk::server::CModelState, m_ModelName) == 0xd8);
        static_assert(offsetof(source2sdk::server::CModelState, m_bClientClothCreationSuppressed) == 0x125);
        static_assert(offsetof(source2sdk::server::CModelState, m_MeshGroupMask) == 0x1e0);
        static_assert(offsetof(source2sdk::server::CModelState, m_nBodyGroupChoices) == 0x230);
        static_assert(offsetof(source2sdk::server::CModelState, m_nIdealMotionType) == 0x27a);
        static_assert(offsetof(source2sdk::server::CModelState, m_nForceLOD) == 0x27b);
        static_assert(offsetof(source2sdk::server::CModelState, m_nClothUpdateFlags) == 0x27c);
        
        static_assert(sizeof(source2sdk::server::CModelState) == 0x290);
    };
};
