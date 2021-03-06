//
//  ViewController.swift
//  VideoKitCustomRecorder
//
//  Created by Dennis Stücken on 11/11/20.
//
import UIKit
import VideoKitCore
import VideoKitRecorder
import AVFoundation
import AVKit

class ViewController: VKRecorderViewController {
    /**
     Set dataSource and delegate before super.viewDidLoad call.
     */
    override func viewDidLoad() {
        dataSource = self
        delegate = self
        
        super.viewDidLoad()
    }
}

extension ViewController: VKRecorderViewControllerDataSource {
    func shouldAutoMergeClips() -> Bool {
        return true
    }
    
    func didFinishMergingClips(_ recorder: VKRecorder, mergedClipUrl: URL, autoMerged: Bool) {
        print("Clips successfully merged into video file " + mergedClipUrl.absoluteString)
        
        DispatchQueue.main.async {
            let playerVC: AVPlayerViewController = AVPlayerViewController()
            playerVC.player = AVPlayer(playerItem: .init(url: mergedClipUrl))
            playerVC.player?.play()
            self.present(playerVC, animated: true, completion: nil)
        }
    }
    
    func didFailMergingClips(_ recorder: VKRecorder, error: Error, autoMerged: Bool) {
        
    }
}

extension ViewController: VKRecorderViewControllerDelegate {
    func didSelectVideoFromCameraRoll(videoUrl: URL) {
        print(#function)
    }
    
    func didSelectImageFromCameraRoll(image: UIImage) {
        print(#function)
    }
    
    func didSelectRecordingLength(_ recordingLength: VKRecordingLength, picker: VKHorizontalPicker) {
        print(#function + " - " + recordingLength.name)
    }
    
    func willStartCamera(_ recorder: VKRecorder) {
        print(#function)
    }
    
    func didStartCamera(_ recorder: VKRecorder) {
        print(#function)
    }
    
    func willStartRecording(_ recorder: VKRecorder) {
        print(#function)
    }
    
    func didStartRecording(_ recorder: VKRecorder) {
        print(#function)
    }
    
    func didPauseRecording(clip: VKRecorderClip, recorder: VKRecorder) {
        print(#function)
    }
    
    func didSetupUI() {
        print(#function)
    }
    
    func didSetupRecordButton(button: VKRecordButton) {
        print(#function)
    }
    
    func configure(video: VKRecorderVideoConfiguration, audio: VKRecorderAudioConfiguration) {
        print(#function)
    }
    
    func didTapNextButton(_ recorder: VKRecorder) {
        print(#function)
    }
    
    func didFailMergingClips(_ recorder: VKRecorder, error: Error) {
        print(#function)
    }
    
    func didExit(_ recorder: VKRecorder, recordingViewController: VKRecorderViewController) {
        print(#function)
        
        recorder.previewLayer.removeFromSuperlayer()
        recorder.endSession()
        
        self.dismiss(animated: true, completion: nil)
    }
    
    func exitMenuDidTapStartOver(_ recorder: VKRecorder) {
        print(#function)
    }
    
    func exitMenuDidTapExit(_ recorder: VKRecorder) {
        print(#function)
    }
}
